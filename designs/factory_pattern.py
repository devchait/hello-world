from python_registration import ExecutorFactory
from python_registration import ExecutorBase
from abc import ABCMeta, abstractmethod
import logging
import os
import shlex
import subprocess
from typing import Callable
 
@ExecutorFactory.register('local')
class LocalExecutor(ExecutorBase):

    def run(self, command: str) -> (str, str):
        """ Runs the given command using subprocess """

         args = shlex.split(command)
        stdout, stderr = subprocess.Popen(args,
                                          stdout=subprocess.PIPE,
                                          stderr=subprocess.PIPE).communicate()

        out = stdout.decode('utf-8')
        err = stderr.decode('utf-8')
return out, err

    # end run()

# end class LocalExecutor
