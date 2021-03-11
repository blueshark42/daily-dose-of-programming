# Security Error

Problem Rating: 500 (Medium)

## Part 1

You were travelling but your plane got delayed because of a serious issue. Their scanners scan IDs to check if the IDs are legitimate or not. The program automatically updated
but doesn't seem to work properly and none of the guards understand the code. You quickly volunteer to fix the issue. You are taken to the guard's office where you are presented
with the following code:

The code contains some kind of error.

- Your goal is to find the error and remove it to keep the program running properly.

**Input:**

- None

**Output:**

- None

**Your Input:**

```c
id_check get_id_type(sec_id id) {
  int sec_sum = id->checksum();

  checksum_info* retval = sec_check_mngr->check_id_checksum(sec_sum);

  if (!retval->is_valid); {
    cicaos_err("The program has crashed! Error Code: %d", retval->error_code);
    return retval->return_code;
  }
  cicaos_note("Validated ID %d. Clear to proceed.", id->code);
  return retval->return_code;
}
```

**Expected Output:** None

**Note:** There is exactly one error in this code. If you find it, you completed the problem.
