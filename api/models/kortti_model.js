const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const pankki_kortti={
  get: function(callback) {
    return db.query('select * from pankki_kortti', callback);
  },
  getById: function(id, callback) {
    return db.query('select idasiakas from pankki_kortti where idtilit=?', [ id], callback);
  },
  add: function(pankki_kortti, callback) {
    bcrypt.hash(pankki_kortti.Pin, saltRounds, function(err, hash) {
      return db.query('insert into pankki_kortti (idtilit,Pin,idasiakas ) values (?,?,?)',
      [ pankki_kortti.idtilit, hash, pankki_kortti.idasiakas], callback);
    });
  },
  delete: function(id, callback) {
    return db.query('delete from pankki_kortti where idtilit=?', [id], callback);
  },
  update: function(id, pankki_kortti, callback) {
    bcrypt.hash(pankki_kortti.Pin, saltRounds, function(err, hash) {
      return db.query('update pankki_kortti set  Pin=? where idtilit=?',
      [ hash, id], callback);
    });
  }

}

module.exports = pankki_kortti;