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

#include "associatedelegatetoresourceresponse.h"
#include "associatedelegatetoresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  AssociateDelegateToResourceResponse
 *
 * @brief  Handles WorkMail AssociateDelegateToResource responses.
 *
 * @see    WorkMailClient::associateDelegateToResource
 */

/**
 * @brief  Constructs a new AssociateDelegateToResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateDelegateToResourceResponse::AssociateDelegateToResourceResponse(
        const AssociateDelegateToResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new AssociateDelegateToResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateDelegateToResourceRequest(request));
    setReply(reply);
}

const AssociateDelegateToResourceRequest * AssociateDelegateToResourceResponse::request() const
{
    Q_D(const AssociateDelegateToResourceResponse);
    return static_cast<const AssociateDelegateToResourceRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail AssociateDelegateToResource response.
 *
 * @param  response  Response to parse.
 */
void AssociateDelegateToResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateDelegateToResourceResponsePrivate
 *
 * @brief  Private implementation for AssociateDelegateToResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDelegateToResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateDelegateToResourceResponse instance.
 */
AssociateDelegateToResourceResponsePrivate::AssociateDelegateToResourceResponsePrivate(
    AssociateDelegateToResourceQueueResponse * const q) : AssociateDelegateToResourcePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail AssociateDelegateToResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateDelegateToResourceResponsePrivate::AssociateDelegateToResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDelegateToResourceResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
