const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  //port:'3306',
  user: 'pankki_admin',//pankki_admin
  password: 'bosspankki', //bosspankki
  database: 'pankki'
});
module.exports = connection;
/*const mysql = require('mysql');
const dotenv = require('dotenv');
dotenv.config();

const connection = mysql.createConnection(process.env.MYSQL);
module.exports = connection;*/
