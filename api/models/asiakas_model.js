const db = require('../database');
//const bcrypt = require('bcryptjs');

//const saltRounds = 10;
const asiakas={
    get: function(callback) {
        return db.query('select * from asiakas', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from asiakas where idasiakas=?', [id], callback);
    },
    add: function(asiakas, callback) {
        return db.query('insert into asiakas (Etunimi,Sukunimi) values (?,?)', [ asiakas.Etunimi, asiakas.Sukunimi, ], callback);
    },
    delete: function(id, callback) {
        return db.query('delete from asiakas where idasiakas=?', [id], callback);
    },
    update: function(id, asiakas, callback) {
        return db.query('update asiakas set  Etunimi=?,Sukunimi=?,where idasiakas=?', [ asiakas.Etunimi, asiakas.Sukunimi, id], callback);
    }
}

module.exports = asiakas;
