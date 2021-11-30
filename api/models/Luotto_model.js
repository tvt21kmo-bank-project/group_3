const db = require('../database');

const tilit={
    get: function(tilit, callback) {
        return db.query('select Luottoraja from tilit', [tilit.Saldo], callback);
    },
    getById: function(id, callback) {
        return db.query('select Luottoraja from tilit where idtilit=?', [id], callback);
    },
}

module.exports = tilit;