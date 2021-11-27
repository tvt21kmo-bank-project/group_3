const db = require('../database');

const tilitapahtumat={
    get: function(callback) {
        return db.query('select * from tilitapahtumat order by idtilitapahtumat desc', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from tilitapahtumat where idtilit=? order by idtilitapahtumat desc', [id], callback);
    },
    delete: function(id, callback) {
        return db.query('delete from tilitapahtumat where idtilit=?', [id], callback);
      },
}

module.exports = tilitapahtumat;