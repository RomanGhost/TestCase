@echo off
npm install
node-gyp configure
node-gyp build
node server.js
