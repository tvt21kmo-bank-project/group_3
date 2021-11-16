const db = require('../database');

const login={
  checkPassword: function(username, callback) {
      return db.query('SELECT Pin FROM pankki_kortti WHERE ID_numero = ?',[username], callback); 
    }
};
          
module.exports = login;