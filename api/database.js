const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'root',
  password: 'Lenghtnotio1',
  database: 'pankki'
});
module.exports = connection;

/*const mysql = require('mysql');
const dotenv = require('dotenv');
dotenv.config();

const connection = mysql.createConnection(process.env.MYSQL);
module.exports = connection;*/