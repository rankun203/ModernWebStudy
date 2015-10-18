<?php
/**
 * Created by IntelliJ IDEA.
 * User: rankun203
 * Date: 10/17/15
 * Time: 6:10 PM
 */

require_once 'Blog.class.php';
require_once 'DB.class.php';

class BlogTools
{

    public function listAll()
    {
        $db = new DB();
        $result = $db->selectList('blog', '1=1');

        $userList = array();
        while ($row = mysql_fetch_array($result)) {
            $user = new Blog($row);
            array_push($userList, $user);
        }

        return $userList;
    }

    public function findOne($id)
    {
        $db = new DB();
        $result = $db->select('blog', 'id=' . $id);
        return new Blog($result);
    }

}

