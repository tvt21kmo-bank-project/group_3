const db = require('../database');

const ID_numero={
  checknumero: function(tiedot, callback) {
      return db.query('SELECT idtilit FROM pankki_kortti WHERE ID_numero = ?',[tiedot], callback); 
    }
};
          
module.exports = ID_numero;