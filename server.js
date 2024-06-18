const express = require('express');
const open = require('open');
const path = require('path');
const addon = require('./build/Release/privilege_checker');

const app = express();
const port = 3000;

app.use(express.urlencoded({ extended: true }));
app.use(express.static(path.join(__dirname, 'public')));

app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, 'public', 'index.html'));
});

app.post('/check', (req, res) => {
  const username = req.body.username;
  try {
    const result = addon.checkPrivilege(username);
    res.send(`
      <p>${result}</p>
      <a href="/">Назад</a>
    `);
  } catch (err) {
    res.send(`
      <p>Ошибка: ${err.message}</p>
      <a href="/">Назад</a>
    `);
  }
});

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
  open(`http://localhost:${port}`);
});
