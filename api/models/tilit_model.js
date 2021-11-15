const db = require('../database');

const tilit={
    get: function(callback) {
        return db.query('select * from tilit', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from tilit where idtilit=?', [id], callback);
    },
    add: function(tilit, callback) {
        return db.query('insert into tilit (tilinumero, Asiakas_idAsiakas) values (?,?)', [tilit.tilinumero, tilit.Asiakas_idAsiakas], callback);
    },
    delete: function(id, callback) {
        return db.query('delete from tilit where idtilit=?', [id], callback);
    },
    update: function(id, tilit, callback) {
        return db.query('update tilit set tilinumero=?, Asiakas_idAsiakas=? where idtilit=?', [tilit.tilinumero, tilit.Asiakas_idAsiakas, id], callback);
    }
}

module.exports = tilit;