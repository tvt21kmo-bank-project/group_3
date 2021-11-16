const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds = 10;
const asiakas={
    get: function(callback) {
        return db.query('select * from asiakas', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from asiakas where idAsiakas=?', [id], callback);
    },
    add: function(asiakas, callback) {
        return db.query('insert into asiakas (Asiakas_tunnus, nimi, osoite, puhelin_numero) values (?,?,?,?)', [asiakas.Asiakas_tunnus, asiakas.nimi, asiakas.osoite, asiakas.puhelin_numero], callback);
    },
    delete: function(id, callback) {
        return db.query('delete from asiakas where idAsiakas=?', [id], callback);
    },
    update: function(id, asiakas, callback) {
        return db.query('update asiakas set Asiakas_tunnus=?, nimi=?, osoite=?, puhelin_numero=? where idAsiakas=?', [asiakas.Asiakas_tunnus, asiakas.nimi, asiakas.osoite, asiakas.puhelin_numero, id], callback);
    }
}

module.exports = asiakas;
