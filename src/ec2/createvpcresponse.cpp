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

#include "createvpcresponse.h"
#include "createvpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateVpcResponse
 * \brief The CreateVpcResponse class provides an interace for EC2 CreateVpc responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createVpc
 */

/*!
 * Constructs a CreateVpcResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVpcResponse::CreateVpcResponse(
        const CreateVpcRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateVpcResponsePrivate(this), parent)
{
    setRequest(new CreateVpcRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVpcRequest * CreateVpcResponse::request() const
{
    Q_D(const CreateVpcResponse);
    return static_cast<const CreateVpcRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateVpc \a response.
 */
void CreateVpcResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateVpcResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateVpcResponsePrivate
 * \brief The CreateVpcResponsePrivate class provides private implementation for CreateVpcResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateVpcResponsePrivate object with public implementation \a q.
 */
CreateVpcResponsePrivate::CreateVpcResponsePrivate(
    CreateVpcResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateVpc response element from \a xml.
 */
void CreateVpcResponsePrivate::parseCreateVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
