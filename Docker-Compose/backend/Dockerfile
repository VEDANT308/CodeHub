FROM node:20-alpine

WORKDIR /app

COPY package*.json ./

RUN npm install

COPY . .

# Entrypoint ensures node_modules in the named volume stay in sync
# with package.json from the bind mount. On first run, the named volume
# is empty so npm install populates it. On subsequent runs with a stale
# volume, npm install detects the diff and installs missing packages.
ENTRYPOINT ["sh", "-c", "npm install && exec \"$@\"", "--"]

CMD ["node", "server.js"]