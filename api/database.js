const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'pankki_admin',
  password: 'bosspankki',
  database: 'pankki'
});
module.exports = connection;