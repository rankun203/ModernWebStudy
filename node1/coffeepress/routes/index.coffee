express = require("express")
router = express.Router()

# GET home page. 
router.get "/", (req, res) ->
  res.render "index",
    title: "My first node blog."

  return

module.exports = router
