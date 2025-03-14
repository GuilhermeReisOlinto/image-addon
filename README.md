
# Image Addon - Processamento de Imagens com C++ e Node.js

Este é um addon nativo para Node.js, desenvolvido em C++ com OpenCV, que permite realizar operações rápidas de processamento de imagens, como:

✅ Redimensionamento (resize)

✅ Conversão de formato (JPEG ↔ PNG ↔ WebP)

✅ Aplicação de filtros (Preto e Branco, Blur, etc.




## image-addon/

```
    │── src/
    │   ├── image_processor.cc  # Implementação das funções
    │   ├── image_processor.h   # Header das funções
    │   ├── main.cc             # Exporta funções para o Node.js
    │── binding.gyp             # Configuração do node-gyp
    │── useCase/
    |   ├── index.js                # Wrapper JavaScript
    │── package.json            # Configuração do pacote
```

## 🔧 Instalação e Compilação

1️⃣ Clone o repositório

```
    git clone https://github.com/seu-usuario/image-addon.git
    cd image-addon
```

2️⃣ Instale as dependências

```
    npm install --save nan
    npm install --save-dev node-gyp
```

3️⃣ Instale o OpenCV

- Ubuntu/Debian: sudo apt install libopencv-dev
- MacOS: brew install opencv
- Windows: Baixe e instale manualmente o OpenCV e configure as variáveis de ambiente


4️⃣ Compile o projeto

```
    npx node-gyp configure
    npx node-gyp build
```


"Há um exemplo prático no projeto que demonstra como utilizar o caso de uso (useCase)."
