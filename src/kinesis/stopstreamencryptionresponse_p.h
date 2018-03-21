/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_STOPSTREAMENCRYPTIONRESPONSE_P_H
#define QTAWS_STOPSTREAMENCRYPTIONRESPONSE_P_H

#include "kinesisresponse.h"
#include "stopstreamencryptionrequest.h"

namespace AWS {

namespace Kinesis {

class StopStreamEncryptionResponse;

class QTAWS_EXPORT StopStreamEncryptionResponsePrivate : public KinesisResponsePrivate {
    Q_OBJECT

public:

    StopStreamEncryptionResponsePrivate(StopStreamEncryptionResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopStreamEncryptionResponse)
    Q_DISABLE_COPY(StopStreamEncryptionResponsePrivate)

};

} // namespace Kinesis
} // namespace AWS

#endif
