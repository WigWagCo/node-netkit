#!/usr/bin/env nodejs

try {
    var reporter = require('nodeunit').reporters.default;
}
catch(e) {
    console.log("Cannot find nodeunit module.");
    console.log("You can download submodules for this project by doing:");
    console.log("");
    console.log("    git submodule init");
    console.log("    git submodule update");
    console.log("");
    process.exit();
}

process.chdir(__dirname + '/../');

//run unit tests
reporter.run(['./tests/unit/test-rtnetlink.js']);
reporter.run(['./tests/unit/test-ipparse.js']);
reporter.run(['./tests/unit/test-nlprocess.js']);

//run functional tests that use nodeunit
reporter.run(['./tests/unit/test-link.js'])
reporter.run(['./tests/unit/test-addr.js'])
//reporter.run(['./tests/unit/test-addrlabel.js'])

