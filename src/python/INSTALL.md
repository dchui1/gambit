On Python 3.5 (will not work on python 3.7)

1. Install the requirements from `requirements.txt` with `pip install -r requirements.txt`

2. Download the updated-for-python3 version of gambit:
   ```git clone https://github.com/dchui1/gambit/tree/compile-python3```
3. In the gambit directory, ensure you're in the `compile-python3` branch:
   ```git checkout compile-python3```
4. Follow the instructions in the `INSTALL` file to build and run the `configure.sh` script
5.  From the `src/python` directory, install the Python interface to gambit:
    ```python3 setup.py install```

### Pitfalls
    You might need to restart for this to work... not sure why
    Don't install the Gambit found on PyPI. This is some other unrelated package
    versioned up to ~0.1.6 and not the gambit we want (which should be 16.0.1)
