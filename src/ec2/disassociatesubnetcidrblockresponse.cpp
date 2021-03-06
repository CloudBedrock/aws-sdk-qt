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

#include "disassociatesubnetcidrblockresponse.h"
#include "disassociatesubnetcidrblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DisassociateSubnetCidrBlockResponse
 * \brief The DisassociateSubnetCidrBlockResponse class provides an interace for EC2 DisassociateSubnetCidrBlock responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::disassociateSubnetCidrBlock
 */

/*!
 * Constructs a DisassociateSubnetCidrBlockResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateSubnetCidrBlockResponse::DisassociateSubnetCidrBlockResponse(
        const DisassociateSubnetCidrBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DisassociateSubnetCidrBlockResponsePrivate(this), parent)
{
    setRequest(new DisassociateSubnetCidrBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateSubnetCidrBlockRequest * DisassociateSubnetCidrBlockResponse::request() const
{
    Q_D(const DisassociateSubnetCidrBlockResponse);
    return static_cast<const DisassociateSubnetCidrBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DisassociateSubnetCidrBlock \a response.
 */
void DisassociateSubnetCidrBlockResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateSubnetCidrBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DisassociateSubnetCidrBlockResponsePrivate
 * \brief The DisassociateSubnetCidrBlockResponsePrivate class provides private implementation for DisassociateSubnetCidrBlockResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DisassociateSubnetCidrBlockResponsePrivate object with public implementation \a q.
 */
DisassociateSubnetCidrBlockResponsePrivate::DisassociateSubnetCidrBlockResponsePrivate(
    DisassociateSubnetCidrBlockResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DisassociateSubnetCidrBlock response element from \a xml.
 */
void DisassociateSubnetCidrBlockResponsePrivate::parseDisassociateSubnetCidrBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateSubnetCidrBlockResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
