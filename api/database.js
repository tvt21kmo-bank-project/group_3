const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'root',
  password: 'Nikoiina1989',
  database: 'pankki'
});
module.exports = connection;