const db = require('../database');

const login={
  checkidasiakas: function(tiedot, callback) {
      return db.query('SELECT idasiakas FROM pankki_kortti WHERE ID_numero = ?',[tiedot], callback); 
    }
};
          
module.exports = login;