const db = require('../database');
//const bcrypt = require('bcryptjs');

//const saltRounds = 10;
const pankki_kortti={
    get: function(callback) {
        return db.query('select * from pankki_kortti', callback);
    },
    getById: function(id, id, callback) {
        return db.query('select * from pankki_kortti where idasiakas=? OR idtilit=?', [id],[id], callback);
    },
    add: function(pankki_kortti, callback) {
        return db.query('insert into pankki_kortti (ID_numero, Pin, idasiakas, idtilit) values (?,?,?,?)', [ pankki_kortti.ID_numero, pankki_kortti.Pin, pankki_kortti.idasiakas, pankki_kortti.idtilit ], callback);
    },
    delete: function(id, id, callback) {
        return db.query('delete from pankki_kortti where idasiakas=? OR idtilit=?', [id], [id], callback);
    },
    update: function(id, id,  pankki_kortti, callback) {
        return db.query('update pankki_kortti set  ID_numero,Pin,where idasiakas=? OR idtilit=?', [ pankki_kortti.ID_numero, pankki_kortti.Pin, id, id], callback);
    }
}

module.exports = pankki_kortti;