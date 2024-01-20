const fs = require('fs')
const readableStream = fs.createReadStream(path/to/file)

readableStream.on('data',buffer=>{
    console.log(buffer)
    console.log(buffer.toString('utf-8'))
})

readableStream.on('end',()=>{
    console.log('finished reading file')
})