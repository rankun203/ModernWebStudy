<?php
/**
 * Created by IntelliJ IDEA.
 * User: rankun203
 * Date: 10/18/15
 * Time: 6:13 PM
 */

require_once 'DB.class.php';

class Blog
{

    public $id;
    public $title;
    public $content;
    public $type;
    public $create_time;
    public $update_time;
    public $is_deleted;
    public $delete_time;

    public function __construct($data)
    {
        $this->id = (isset($data['id'])) ? $data['id'] : '';
        $this->title = (isset($data['title'])) ? $data['title'] : '';
        $this->content = (isset($data['content'])) ? $data['content'] : '';
        $this->type = (isset($data['type'])) ? $data['type'] : 'htm';
        $this->is_deleted = (isset($data['is_deleted'])) ? $data['is_deleted'] : false;
    }

    public function save()
    {
        $db = new DB();

        $data = array(
            'title' => "'" . mysql_escape_string($this->title) . "'",
            'content' => "'" . mysql_escape_string($this->content) . "'",
            'type' => "'" . mysql_escape_string($this->type) . "'",
            'is_deleted' => 'false',
        );

        $this->id = $db->insert($data, 'blog');
        $this->create_time = time();
        $this->update_time = time();

        return true;
    }

}

