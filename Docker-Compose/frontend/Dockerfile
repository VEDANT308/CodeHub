FROM node:20-alpine

WORKDIR /app

COPY package*.json ./

RUN npm install

COPY . .

# Entrypoint ensures node_modules in the named volume stay in sync
# with package.json from the bind mount.
ENTRYPOINT ["sh", "-c", "npm install && exec \"$@\"", "--"]

CMD ["npm", "run", "dev"]