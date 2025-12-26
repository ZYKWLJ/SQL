
-- 关闭自动提交（提升速度）
SET autocommit = 0;

-- 批量导入数据（核心命令）
LOAD DATA LOCAL INFILE 'C:\\Users\\29001\\Desktop\\code\\大数据\\million_select_sql4.md'

INTO TABLE score (score);

-- 手动提交事务
COMMIT;

-- 恢复自动提交
SET autocommit = 1;