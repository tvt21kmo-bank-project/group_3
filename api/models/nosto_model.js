const db = require('../database');

const nosto={
    get: function(callback) {
        return db.query('select * from tilitapahtumat', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from tilitapahtumat where idtilit=?', [id], callback);
    },
}

module.exports = nosto;