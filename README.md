# atcoder

## Get started

#### setup (ubuntu)
```sh
# python
PYENV_DEP="make build-essential libssl-dev zlib1g-dev \
    libbz2-dev libreadline-dev libsqlite3-dev wget llvm libncurses5-dev \
    libncursesw5-dev xz-utils tk-dev libffi-dev liblzma-dev python3-openssl"

sudo apt-get update -y \
    && sudo apt-get install -y --no-install-recommends ${PYENV_DEP}

PYTHON_VERSION=3.10.5
PYENV_ROOT=${HOME}/.pyenv

curl https://pyenv.run | bash \
    && echo 'export PYENV_ROOT="${HOME}/.pyenv"' >> ${HOME}/.bashrc \
    && echo 'export PATH="${PYENV_ROOT}/bin:${PATH}"' >> ${HOME}/.bashrc \
    && echo 'eval "$(pyenv init --path)"' >> ${HOME}/.bashrc \
    && export PATH="${PYENV_ROOT}/bin:${PATH}" \
    && eval "$(pyenv init --path)" \
    && pyenv install "${PYTHON_VERSION}" \
    && pyenv global "${PYTHON_VERSION}"

# oj
pip3 install --upgrade pip
pip3 install online-judge-tools online-judge-template-generator selenium

# c++
sudo apt install gcc-12
sudo apt install g++-12
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 12
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-12 12
```

##### add settins.json
`"C_Cpp.default.cppStandard": "c++20"`

#### how to oj
- login: `oj login -u [userName] -p [password] "https://atcoder.jp/"`
- fetch : `oj-prepare [url]`
- test: `oj test -c 'python main.py' -t 2`
- submit: `oj submit main.py -l 5055 -y`

#### how to c++
- compile
    - default: `g++ -o main main.cpp`
    - 20: `g++ -std=gnu++20 -o main main.cpp`