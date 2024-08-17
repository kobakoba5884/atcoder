# atcoder

## Get started

#### setup (ubuntu)
```sh
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

pip3 install --upgrade pip
pip3 install online-judge-tools online-judge-template-generator selenium
```

#### how to login
`oj login -u [userName] -p [password] "https://atcoder.jp/"`