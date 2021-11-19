const db = require('../database');
//const bcrypt = require('bcryptjs');

//const saltRounds = 10;
const tilitapahtumat={
    get: function(callback) {
        return db.query('select * from tilitapahtumat', callback);
    },
    getById: function(id, callback) {
        return db.query('select * from tilitapahtumat where idtilitapahtumat=?', [id], callback);
    },
}

module.exports = tilitapahtumat;