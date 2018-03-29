/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATERECEIPTRULERESPONSE_H
#define QTAWS_UPDATERECEIPTRULERESPONSE_H

#include "sesresponse.h"
#include "updatereceiptrulerequest.h"

namespace AWS {

namespace SES {

class UpdateReceiptRuleResponsePrivate;

class QTAWS_EXPORT UpdateReceiptRuleResponse : public SESResponse {
    Q_OBJECT

public:
    UpdateReceiptRuleResponse(const UpdateReceiptRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReceiptRuleRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateReceiptRuleResponse)
    Q_DISABLE_COPY(UpdateReceiptRuleResponse)

};

} // namespace SES
} // namespace AWS

#endif
