 const db = require('../database');

const asiakas={
    get: function(callback) {
        return db.query('select * from asiakas', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from asiakas where idasiakas=?', [id], callback);
    },
    add: function(asiakas, callback) {
        return db.query('insert into asiakas (idasiakas,Etunimi,Sukunimi) values (?,?,?)', [ asiakas.idasiakas, asiakas.Etunimi, asiakas.Sukunimi, ], callback);
    },
    delete: function(id, callback) {
        return db.query('delete from asiakas where idasiakas=?', [id], callback);
    },
    update: function(id, asiakas, callback) {
        return db.query('update asiakas set  Etunimi=?,Sukunimi=? where idasiakas=?', [ id, asiakas.Etunimi, asiakas.Sukunimi], callback);
    }
}

module.exports = asiakas;
