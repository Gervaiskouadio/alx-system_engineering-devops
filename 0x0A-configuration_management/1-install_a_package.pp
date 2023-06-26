# install flask and puppet-lint -v 2.

package { 'python3-pip':
  ensure => installed,
}

exec { 'install_flask':
  command => '/usr/bin/pip3 install flask==2.1.0',
  creates => '/path/to/flask',
}
