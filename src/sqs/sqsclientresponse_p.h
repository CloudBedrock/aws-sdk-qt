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

#ifndef QTAWS_SQSCLIENTRESPONSE_P_H
#define QTAWS_SQSCLIENTRESPONSE_P_H

#include "response.h"
#include "sqsclientrequest.h"

namespace AWS {

namespace  {

class SqsClientResponse;

class QTAWS_EXPORT SqsClientResponsePrivate : public AwsAbstractResponsePrivate {
    Q_OBJECT

public:

    SqsClientResponsePrivate(SqsClientResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsClientResponse)
    Q_DISABLE_COPY(SqsClientResponsePrivate)

};

} // namespace 
} // namespace AWS

#endif
