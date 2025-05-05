FROM ubuntu:20.04
# ARCHIVO TOTALMENTE FUNCIONAL
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get upgrade -y \
    && apt-get install -y apache2 \
    && apt-get install -y php php-mysql\
    && apt-get install -y libapache2-mod-php \
    && apt-get install -y mysql-server \
    && apt-get install -y phpmyadmin \
    && apt-get clean

RUN ln -s /usr/share/phpmyadmin /var/www/html/phpmyadmin
EXPOSE 80


CMD [ "apache2ctl","-D","FOREGROUND" ]