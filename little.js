const fs = require('fs')
const readableStream = fs.createReadStream(path/to/file)

readableStream.on('data',buffer=>{
    console.log(buffer)
  
})

readableStream.on('end',()=>{
    console.log('finished reading file')
})