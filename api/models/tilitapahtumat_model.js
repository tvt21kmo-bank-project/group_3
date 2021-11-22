const db = require('../database');

const tilitapahtumat={
    get: function(callback) {
        return db.query('select * from tilitapahtumat order by idtilitapahtumat desc limit 10', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from tilitapahtumat where idtilit=? order by idtilitapahtumat desc limit 10', [id], callback);
    },
}

module.exports = tilitapahtumat;