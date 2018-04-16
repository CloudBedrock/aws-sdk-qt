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

#include "createpublickeyresponse.h"
#include "createpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreatePublicKeyResponse
 *
 * \brief The CreatePublicKeyResponse class encapsulates CloudFront CreatePublicKey responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createPublicKey
 */

/*!
 * @brief  Constructs a new CreatePublicKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePublicKeyResponse::CreatePublicKeyResponse(
        const CreatePublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreatePublicKeyResponsePrivate(this), parent)
{
    setRequest(new CreatePublicKeyRequest(request));
    setReply(reply);
}

const CreatePublicKeyRequest * CreatePublicKeyResponse::request() const
{
    Q_D(const CreatePublicKeyResponse);
    return static_cast<const CreatePublicKeyRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront CreatePublicKey response.
 *
 * @param  response  Response to parse.
 */
void CreatePublicKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreatePublicKeyResponsePrivate
 *
 * \brief Private implementation for CreatePublicKeyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreatePublicKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePublicKeyResponse instance.
 */
CreatePublicKeyResponsePrivate::CreatePublicKeyResponsePrivate(
    CreatePublicKeyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront CreatePublicKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePublicKeyResponsePrivate::parseCreatePublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePublicKeyResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
