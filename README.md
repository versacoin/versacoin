![VersaCoin](https://versacoin.org/images/VersacoinCoin03.png)![VersaCoin](https://versacoin.org/images/VersacoinLogo04.png)

VersaCoin Core integration/0.17.1.0
=====================================

[![Build Status](https://travis-ci.org/versacoin/versacoin.svg?branch=master)](https://travis-ci.org/versacoin/versacoin)

https://versacoin.org

What is VersaCoin?
----------------

VersaCoin is an experimental digital currency that enables instant payments to
anyone, anywhere in the world. VersaCoin uses peer-to-peer technology to operate
with no central authority: managing transactions and issuing money are carried
out collectively by the network.
It is designed for commerce in that is fast, dependable and secure.  VersaCoin has everything a cryptocurrency needs and nothing it doesn't need.  Zero Confirmation (0-conf) means no waiting around hoping your transaction makes it into the next block.  Both parties can be assured that the transaction hits the network immediately.  Since blocks are 32 MB and are solved every two minutes, off-chain fixes such as Segwit and Lightning Network are not needed.
VersaCoin Core is the name of open source software which enables the use of this currency.
For more information, as well as an immediately useable, binary version of
the VersaCoin Core software, see https://github.com/versacoin/versacoin/releases, or read the
[original whitepaper](https://versacoin.org/whitepaper.pdf).

License
-------

VersaCoin Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/versacoin/versacoin/tags) are created
regularly to indicate new official, stable release versions of VersaCoin Core.
The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.
### Automated Testing
Developers are strongly encouraged to write [unit tests](src/test/README.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`. Further details on running
and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).
There are also [regression and integration tests](/test), written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/test) are installed) with: `test/functional/test_runner.py`
The Travis CI system makes sure that every pull request is built for Windows, Linux, and macOS, and that unit/sanity tests are run automatically.
### Manual Quality Assurance (QA) Testing
Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.

Translations
------------

Changes to translations as well as new translations can be submitted to
[Bitcoin Core's Transifex page](https://www.transifex.com/projects/p/bitcoin/).
Translations are periodically pulled from Transifex and merged into the git repository. See the
[translation process](doc/translation_process.md) for details on how this works.
**Important**: We do not accept translation changes as GitHub pull requests because the next
pull from Transifex would automatically overwrite them again.
Translators should also subscribe to the [mailing list](https://groups.google.com/forum/#!forum/bitcoin-translators).
