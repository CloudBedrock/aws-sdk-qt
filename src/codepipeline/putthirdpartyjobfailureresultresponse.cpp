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

#include "putthirdpartyjobfailureresultresponse.h"
#include "putthirdpartyjobfailureresultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  PutThirdPartyJobFailureResultResponse
 *
 * @brief  Handles CodePipeline PutThirdPartyJobFailureResult responses.
 *
 * @see    CodePipelineClient::putThirdPartyJobFailureResult
 */

/**
 * @brief  Constructs a new PutThirdPartyJobFailureResultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutThirdPartyJobFailureResultResponse::PutThirdPartyJobFailureResultResponse(
        const PutThirdPartyJobFailureResultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PutThirdPartyJobFailureResultResponse(new PutThirdPartyJobFailureResultResponsePrivate(this), parent)
{
    setRequest(new PutThirdPartyJobFailureResultRequest(request));
    setReply(reply);
}

const PutThirdPartyJobFailureResultRequest * PutThirdPartyJobFailureResultResponse::request() const
{
    Q_D(const PutThirdPartyJobFailureResultResponse);
    return static_cast<const PutThirdPartyJobFailureResultRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline PutThirdPartyJobFailureResult response.
 *
 * @param  response  Response to parse.
 */
void PutThirdPartyJobFailureResultResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutThirdPartyJobFailureResultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutThirdPartyJobFailureResultResponsePrivate
 *
 * @brief  Private implementation for PutThirdPartyJobFailureResultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutThirdPartyJobFailureResultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutThirdPartyJobFailureResultResponse instance.
 */
PutThirdPartyJobFailureResultResponsePrivate::PutThirdPartyJobFailureResultResponsePrivate(
    PutThirdPartyJobFailureResultResponse * const q) : CodePipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline PutThirdPartyJobFailureResultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutThirdPartyJobFailureResultResponsePrivate::parsePutThirdPartyJobFailureResultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutThirdPartyJobFailureResultResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
