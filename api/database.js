const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  port:'8889',
  user: 'root',//pankki_admin
  password: 'root', //bosspankki
  database: 'pankki'
});
module.exports = connection;

/*const mysql = require('mysql');
const dotenv = require('dotenv');
dotenv.config();

const connection = mysql.createConnection(process.env.MYSQL);
module.exports = connection;*/
