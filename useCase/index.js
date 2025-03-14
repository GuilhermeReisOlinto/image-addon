const imageAddon = require("../build/Release/imageaddon.node");

imageAddon.resizeImage("../Humpty.jpg", 200, 200);
imageAddon.convertImageFormat("../Humpty.jpg", "png");
imageAddon.applyGrayscaleFilter("../Humpty.jpg");

console.log("Imagem processada com sucesso!");