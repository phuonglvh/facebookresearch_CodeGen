python -m venv /workspace/.virtualenvs/CodeGen

source /workspace/.virtualenvs/CodeGen/bin/activate

pip install -r ci_requirements.txt

#install fastBPE
git clone https://github.com/phuonglvh/fastBPE.git
cd fastBPE
g++ -std=c++11 -pthread -O3 fastBPE/main.cc -IfastBPE -o fast
python setup.py install
cd ..

# tree-sitter
mkdir tree-sitter
cd tree-sitter
git clone https://github.com/tree-sitter/tree-sitter-cpp.git
git clone https://github.com/tree-sitter/tree-sitter-java.git
git clone https://github.com/tree-sitter/tree-sitter-python.git
git clone https://github.com/tree-sitter/tree-sitter-rust.git
git clone https://github.com/tree-sitter/tree-sitter-go.git
cd ..

git clone https://github.com/NVIDIA/apex
cd apex
pip install -v --disable-pip-version-check --no-cache-dir --global-option="--cpp_ext" --global-option="--cuda_ext" ./
cd ..

# go get golang.org/x/tools/cmd/goimports
