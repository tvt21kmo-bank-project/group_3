const db = require('../database');

const tilit={
    get: function(callback) {
        return db.query('select * from tilit', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from tilit where idtilit=?', [id], callback);
    },
    add: function(tilit, callback) {
        return db.query('insert into tilit (idOmistaja,Tilinumero,Saldo,Kortin_tyyppi,Luottoraja, Padelcoin ) values (?,?,?,?,?,?)', [tilit.idOmistaja, tilit.Tilinumero, tilit.Saldo, tilit.Kortin_tyyppi, tilit.Luottoraja, tilit.Padelcoin], callback);
    },
    delete: function(id, callback) {
        return db.query('delete from tilit where idtilit=?', [id], callback);
    },
    update: function(id, tilit, callback) {
        return db.query('update tilit set idOmistaja=?, Tilinumero=?, Saldo=?, Kortin_tyyppi=?, Luottoraja=? where idtilit=?', [tilit.idOmistaja, tilit.Tilinumero, tilit.Saldo, tilit.Kortin_tyyppi, tilit.Luottoraja ,id], callback);
    }
}

module.exports = tilit;