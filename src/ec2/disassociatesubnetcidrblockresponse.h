/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DISASSOCIATESUBNETCIDRBLOCKRESPONSE_H
#define QTAWS_DISASSOCIATESUBNETCIDRBLOCKRESPONSE_H

#include "ec2response.h"
#include "disassociatesubnetcidrblockrequest.h"

namespace QtAws {
namespace EC2 {

class DisassociateSubnetCidrBlockResponsePrivate;

class QTAWS_EXPORT DisassociateSubnetCidrBlockResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateSubnetCidrBlockResponse(const DisassociateSubnetCidrBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateSubnetCidrBlockRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DisassociateSubnetCidrBlockResponse)
    Q_DISABLE_COPY(DisassociateSubnetCidrBlockResponse)

};

} // namespace EC2
} // namespace QtAws

#endif
