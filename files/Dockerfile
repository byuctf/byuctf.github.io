FROM ubuntu@sha256:a4fab1802f08df089c4b2e0a1c8f1a06f573bd1775687d07fef4076d3a2e4900

ENV PORT 1337
ENV CHAL win

RUN apt-get update
RUN apt-get install -y socat
RUN mkdir /ctf
RUN useradd -M -d /ctf ctf
COPY flag.txt /ctf/flag.txt
COPY $CHAL /ctf/$CHAL
RUN chmod a+x /ctf/$CHAL
RUN chmod a+r /ctf/flag.txt
RUN chown -R root:ctf /ctf

CMD socat -dd TCP4-LISTEN:$PORT,fork,reuseaddr EXEC:/ctf/$CHAL,pty,setuid=ctf,echo=0,raw,iexten=0
EXPOSE $PORT