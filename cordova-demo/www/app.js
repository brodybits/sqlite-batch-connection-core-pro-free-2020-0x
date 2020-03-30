document.addEventListener('deviceready', onReady)

// based on some JavaScript code generated by generate-cordova-package
function log (text) {
  // log into the `messages` div:
  document.getElementById('messages').appendChild(document.createTextNode(text))
  document.getElementById('messages').appendChild(document.createElement('br'))
  // and to the console
  console.log(text)
}

function onReady () {
  log('deviceready event received')

  // for memory database:
  // window.openDatabaseConnection(':memory:', 2, openCallback)

  // for SQLite database file:
  window.sqliteStorageFile.resolveAbsolutePath(
    {
      name: 'demo.db',
      // TEMPORARY & DEPRECATED value, as needed for iOS & macOS ("osx"):
      location: 2
    },
    function (path) {
      log('database file path: ' + path)

      // SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE
      // ref: https://www.sqlite.org/c3ref/open.html
      const flags = 6

      // open with SQLite file path & flags:
      window.openDatabaseConnection(path, flags, openCallback)
    }
  )
}

function openCallback (connectionId) {
  log('connection id: ' + connectionId)

  // ERROR TEST - file name with incorrect flags:
  window.openDatabaseConnection(
    'dummy.db',
    0,
    function (_ignored) {
      log('FAILURE - unexpected open success callback received')
    },
    function (e) {
      log('OK - received error callback as expected for incorrect open call')

      // CONTINUE with batch demo, with the correct connectionId:
      batchDemo(connectionId)
    }
  )
}

function batchDemo (connectionId) {
  log('starting batch demo for connectionId: ' + connectionId)
  window.executeBatch(
    connectionId,
    [
      ['SELECT ?, -?, LOWER(?), UPPER(?)', [null, 123.456789, 'ABC', 'Text']],
      ['SLCT 1', []],
      ['SELECT ?', ['OK', 'out of bounds parameter']],
      ['DROP TABLE IF EXISTS Testing', []],
      ['CREATE TABLE Testing (data NOT NULL)', []],
      ["INSERT INTO Testing VALUES ('test data')", []],
      ['INSERT INTO Testing VALUES (null)', []],
      ['DELETE FROM Testing', []],
      ["INSERT INTO Testing VALUES ('test data 2')", []],
      ["INSERT INTO Testing VALUES ('test data 3')", []],
      ['SELECT * FROM Testing', []],
      ["SELECT 'xyz'", []]
    ],
    batchCallback
  )
}

function batchCallback (batchResults) {
  // show batch results in JSON string format (on all platforms)
  log('received batch results')
  log(JSON.stringify(batchResults))
}
