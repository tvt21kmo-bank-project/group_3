const db = require('../database');

const tilit={
    get: function(tilit, callback) {
        return db.query('select saldo from tilit', [tilit.Saldo], callback);
    },
    getById: function(id, callback) {
        return db.query('select saldo from tilit where idtilit=?', [id], callback);
    },
}

module.exports = tilit;