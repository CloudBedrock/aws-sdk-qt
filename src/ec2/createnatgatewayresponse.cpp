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

#include "createnatgatewayresponse.h"
#include "createnatgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateNatGatewayResponse
 * \brief The CreateNatGatewayResponse class provides an interace for EC2 CreateNatGateway responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createNatGateway
 */

/*!
 * Constructs a CreateNatGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNatGatewayResponse::CreateNatGatewayResponse(
        const CreateNatGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateNatGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateNatGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNatGatewayRequest * CreateNatGatewayResponse::request() const
{
    Q_D(const CreateNatGatewayResponse);
    return static_cast<const CreateNatGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateNatGateway \a response.
 */
void CreateNatGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateNatGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateNatGatewayResponsePrivate
 * \brief The CreateNatGatewayResponsePrivate class provides private implementation for CreateNatGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateNatGatewayResponsePrivate object with public implementation \a q.
 */
CreateNatGatewayResponsePrivate::CreateNatGatewayResponsePrivate(
    CreateNatGatewayResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateNatGateway response element from \a xml.
 */
void CreateNatGatewayResponsePrivate::parseCreateNatGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNatGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
